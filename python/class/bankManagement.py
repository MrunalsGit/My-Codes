class BankAccount:
    def __init__(self, account_number, account_holder):
        self._account_number = account_number
        self._account_holder = account_holder
        self._balance = 0

    def _update_balance(self, amount):
        self._balance += amount

    def deposit(self, amount):
        if amount > 0:
            self._update_balance(amount)

    def withdraw(self, amount):
        if amount > 0 and self._balance >= amount:
            self._update_balance(-amount)
            return True
        return False

    def get_balance(self):
        return self._balance

    def display_account_info(self):
        print("Account Number:", self._account_number)
        print("Account Holder:", self._account_holder)
        print("Balance:", self._balance)


class SavingsAccount(BankAccount):
    def __init__(self, account_number, account_holder, interest_rate):
        super().__init__(account_number, account_holder)
        self.interest_rate = interest_rate

    def apply_interest(self):
        interest = (self._balance * self.interest_rate) // 100
        self._update_balance(interest)


class CheckingAccount(BankAccount):
    def __init__(self, account_number, account_holder, transaction_fee):
        super().__init__(account_number, account_holder)
        self.transaction_fee = transaction_fee

    def withdraw(self, amount):
        total_amount = amount + self.transaction_fee
        if total_amount > 0 and self._balance >= total_amount:
            self._update_balance(-total_amount)
            return True
        return False


class Bank:
    def __init__(self):
        self.accounts = {}

    def add_account(self, account):
        self.accounts[account._account_number] = account

    def remove_account(self, account_number):
        if account_number in self.accounts:
            del self.accounts[account_number]

    def find_account(self, account_number):
        if account_number in self.accounts:
            return self.accounts[account_number]
        return None

    def display_all_accounts(self):
        for account in self.accounts.values():
            account.display_account_info()
            print()

    def apply_yearly_interest(self):
        for account in self.accounts.values():
            if isinstance(account, SavingsAccount):
                account.apply_interest()


bank = Bank()

savings_account = SavingsAccount(101, "Alice", 5)
checking_account = CheckingAccount(102, "Sam", 10)

bank.add_account(savings_account)
bank.add_account(checking_account)

savings_account.deposit(1000)
checking_account.deposit(500)

print("Before Interest Application:")
bank.display_all_accounts()

bank.apply_yearly_interest()

print("After Interest Application:")
bank.display_all_accounts()

checking_account.withdraw(100)
print("After Withdrawal from Checking Account:")
bank.display_all_accounts()

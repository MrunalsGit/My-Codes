class TextAnalyzer:
    def __init__(self, text):
        self._text = text

    def count_words(self):
        words = 0
        in_word = False
        for x in self._text:
            if ('a' <= x <= 'z') or ('A' <= x <= 'Z') or ('0' <= x <= '9'):
                in_word = True
            elif in_word == True:
                words += 1
                in_word = False
        if in_word == True:
            words += 1
        return words

    def most_frequent_word(self):
        word_freq = {}
        current_word = ""
        for x in self._text.lower():
            if ('a' <= x <= 'z') or ('0' <= x <= '9'):
                current_word += x
            elif current_word:
                if current_word in word_freq:
                    word_freq[current_word] += 1
                else:
                    word_freq[current_word] = 1
                current_word = ""
        if current_word:
            if current_word in word_freq:
                word_freq[current_word] += 1
            else:
                word_freq[current_word] = 1

        max_word = None
        max_count = 0
        for word, count in word_freq.items():
            if count > max_count:
                max_count = count
                max_word = word
        return max_word


class CharacterAnalyzer(TextAnalyzer):
    def count_vowels(self):
        vowels = "aeiouAEIOU"
        vowel_count = 0
        for x in self._text:
            if x in vowels:
                vowel_count += 1
        return vowel_count

    def count_consonants(self):
        consonants = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ"
        consonant_count = 0
        for x in self._text:
            if x in consonants:
                consonant_count += 1
        return consonant_count


class WordAnalyzer(TextAnalyzer):
    def average_word_length(self):
        total_length = 0
        word_count = 0
        current_word_length = 0
        for x in self._text:
            if ('a' <= x <= 'z') or ('A' <= x <= 'Z') or ('0' <= x <= '9'):
                current_word_length += 1
            elif current_word_length > 0:
                total_length += current_word_length
                word_count += 1
                current_word_length = 0
        if current_word_length > 0:
            total_length += current_word_length
            word_count += 1
        if word_count == 0:
            return 0
        return total_length / word_count


text = "There are seven wonders in this world"
base_analyzer = TextAnalyzer(text)
char_analyzer = CharacterAnalyzer(text)
word_analyzer = WordAnalyzer(text)

print("Total Words:", base_analyzer.count_words())
print("Most Frequent Word:", base_analyzer.most_frequent_word())
print("Number of Vowels:", char_analyzer.count_vowels())
print("Number of Consonants:", char_analyzer.count_consonants())
print("Average Word Length:", word_analyzer.average_word_length())

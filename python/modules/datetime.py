import datetime

x = datetime.datetime.now()

hour = x.strftime("%I")
minute = x.strftime("%M")
sec = x.strftime("%S")
ampm = x.strftime("%p")
day = x.strftime("%d")
month = x.strftime("%B")
year = x.strftime("%Y")
weekday = x.strftime("%A")

print(f"Time \n{hour} {minute} {sec} {ampm}")
print(f"\nDate \n{day} {month} {year} \n{weekday}")
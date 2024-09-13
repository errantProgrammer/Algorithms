# Enter your code here. Read input from STDIN. Print output to STDOUT
import calendar
days=["MONDAY","TUESDAY","WEDNESDAY","THURSDAY","FRIDAY","SATURDAY","SUNDAY"]
month, day, year = input().split()
month = int(month)
day = int(day)
year=int(year)
if year > 2000 and year < 3000:
    week_name = calendar.weekday(year,month,day)
    print(days[week_name])

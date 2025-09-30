from datetime import date
import sys
import inflect

def convert(birthdate):
    try:
        year, month, day = birthdate.split("-")
        y = int(year)
        m = int(month)
        d = int(day)
        dob = date(y, m, d)
    except Exception:
        sys.exit("invalid value")


    today = date.today()
    delta = today - dob
    days = delta.days
    minutes = days * 24 * 60

    p = inflect.engine()
    words = p.number_to_words(minutes, andword="").capitalize()
    return f"{words} minutes"

def main():
    birth = input("Date of Birth: ")
    result  = convert(birth)
    print(result)

if __name__ == "__main__":
    main()




import pandas as pn
from forex_python.converter import CurrencyRates
import requests as rq
import time
import os

# slow printing just to make the user interface a little more pleasant
def sprint(st):
    for i in st:
        if i != " ":
            print(i, end="")
            time.sleep(0.085)
        else :
            print(" ", end="")
    print("")


# clears the terminal in order to prevent user from getting lost
def clear():
    time.sleep(0.5)
    os.system('cls')


def GetPrice(symbol, exchange, days):
    api_key = 'YOUR API KEY'
    api_url = f'https://min-api.cryptocompare.com/data/v2/histoday?fsym={symbol}&tsym={exchange}&limit={days}&api_key={api_key}'
    raw = rq.get(api_url).json()
    df = pn.DataFrame(raw['Data']['Data'])[['time', 'high', 'low', 'open']].set_index('time')
    df.index = pn.to_datetime(df.index, unit = 's')
    return df


def GetRate(symb1, symb2):
    c = CurrencyRates()
    rate = c.get_rate(symb1, symb2)
    return rate


menu = "1.Crypto currencies, 2.Countries currencies, (E)xit"
header = "============== CurrencyChecker2000 =============="


print(header)
sprint("Hello and welcome to the CurrencyChecker2000")
sprint("Here you can:")
sprint("1. See price of crypto currencies")
sprint("2. See price of countries' currencies")
sprint("Or you can (E)xit")

inpt = str(input("What do you want to do?"))
clear()

while inpt != "e":
    clear()

    if inpt == '1':

        print(header)
        sprint("Please write the symbol of the cryptocurrency")
        inp1=input()

        print("In how many days?")
        inp2 = input()
        clear()

        d= GetPrice(inp1, 'USD', inp2 )
        print(header)
        print(d)

    elif inpt == '2':

        print(header)
        sprint("Please write the symbol of the currency")
        inp1 = str(input())
        clear()

        rate = GetRate('USD', inp1)
        print(header)
        print(rate)


    print("Good?")
    x = input()
    clear()
    print(header)
    print(menu)
    inpt = str(input())
    inpt.lower()

print("Thank you for using CurrencyChecker2000")
clear()
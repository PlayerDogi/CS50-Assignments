#include <stdio.h>
#include <cs50.h>
def main():
    # Prompt the user for a credit card number
    card_number = input("Number: ")

    # Check if the card number is valid using the Luhn algorithm
    if not is_valid(card_number):
        print("INVALID")
    else:
        # Determine the type of the card
        if is_amex(card_number):
            print("AMEX")
        elif is_mastercard(card_number):
            print("MASTERCARD")
        elif is_visa(card_number):
            print("VISA")
        else:
            print("INVALID")

# Luhn Algorithm to validate the card number
def is_valid(card_number):
    total = 0
    reverse_digits = card_number[::-1]

    # Process every digit, and double every second digit
    for i, digit in enumerate(reverse_digits):
        n = int(digit)

        if i % 2 == 1:  # Double every second digit
            n *= 2
            if n > 9:
                n -= 9

        total += n

    # If the total is divisible by 10, the number is valid
    return total % 10 == 0

# Check if the card is AMEX
def is_amex(card_number):
    return len(card_number) == 15 and card_number.startswith(('34', '37'))

# Check if the card is MASTERCARD
def is_mastercard(card_number):
    return len(card_number) == 16 and card_number.startswith(('51', '52', '53', '54', '55'))

# Check if the card is VISA
def is_visa(card_number):
    return (len(card_number) == 13 or len(card_number) == 16) and card_number.startswith('4')

if __name__ == "__main__":
    main()

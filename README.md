# Ft_Printf
The printf function is one of the most versatile and well-known functions in the C language.From a testing aid to tabulation method, printf is a very powerful and important tool in everydev's kit. This project aims to recreate the behaviour of the original MacOS's printf, including its basic error management, some of its flags, minimum field width stipulation and most of itsbasic conversions.

## THINGS TO KEEP IN MIND before starting off:

**Conversions to handle:** csdiupxX%

• %c print a single character.

• %s print a string of characters.

• %p The void * pointer argument is printed in hexadecimal.

• %d print a decimal (base 10) number.

• %i print an integer in base 10.

• %u print an unsigned decimal (base 10) number.

• %x print a number in hexadecimal (base 16).

• %% print a percent sign.

**Value to return:** The function's return is the number of characters printed or -1 for error.

Since we need to print stuff, we will use the function write() extensively in this project.

## Variadic Functions

Variadic functions are functions whose total number of elements is unknown at the beginning. Understanding how these functions work and how we should apply them is the key to this project.

### How to declare, initialise, move through and close a variadic function :

![image](https://user-images.githubusercontent.com/103336451/221598632-f8e85032-c2df-42b0-81b6-8a55f62ba054.png)

### Here's a quick table for each conversion type:

![image](https://user-images.githubusercontent.com/103336451/221598838-fe72db8b-8940-4dbe-9b98-64973aa80754.png)

## Testers

To test the code we're going to be using the Francinette Printf Tester. There are some good others but I'll only be covering this one.

Check the following link to know more about this tester: https://github.com/xicodomingues/francinette

![image](https://user-images.githubusercontent.com/103336451/221601664-d89b4f2b-e739-4370-a582-2ad07d2c9146.png)


## Final Grade

![image](https://user-images.githubusercontent.com/103336451/221595278-46752365-ca9d-427f-833e-a3e59ec30d49.png)


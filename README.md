# Lab_2


**GENERAL INSTRUCTIONS – FOR LAB**

IMPORTANT:  Your programs MUST get input, create variables, do calculations, and format as instructed. Do not just hard-code the output to get the program to work, I WILL check the code and if you do not follow directions you will not get very many points even if the code compiles and matches the test output.
Do not forget to put your name, CSIS 135 and Lab# in comments at the top of each .cpp file.
REGARDING PSEUDOCODE:  Some programs require pseudocode and some don't - read carefully.  If a program requires pseudocode you should put it at the TOP of your .cpp file for that program USING COMMENTS.  Put it right underneath your name and other information. Pseudocode is worth points so you will lose points if you don’t do it.


LAB #2 – INTERPLANETARY TRAVEL 25 pts
Instructions:  This program will generate some information for a user about interplanetary travel (pretend we can travel easily to other planets for this problem).   This program will perform calculations concerning weight on various planets as well as travel time between planets.  (Do not use arrays for this program - make the program as efficient as possible using only selection statements)

Your program should start out by displaying the following information about the program:

```
Welcome to INTERPLANETARY TRAVEL PROGRAM!
This program enables you to find out your travel time to the planet
you want to travel to as well as your weight on there.
Please enjoy the program and hope you'll find the perfect planet for you!


Next the program should display the following menu:

INTERPLANETARY TRAVEL MENU
---------------------------
a) Mercury
b) Venus
c) Earth
d) Mars
e) Jupiter
f) Saturn
g) Uranus
h) Neptune
q) Quit
Select a planet to travel to or q to quit the program:

```
If the user chooses a-h, the program should then ask the user to enter their weight (ask politely) and the speed at which they wish to travel (in miles per hour).  Now you have all the data you need from the user:  the planet they wish to travel to, their weight (in lbs on Earth) and the speed at which they wish to travel (in miles per hour).  

Using the data the user input and the table on the next page calculate the user’s weight on the planet they chose as well as the travel time from earth.  

NOTE:  The table shows the distance each planet is from the Sun.  In addition we’re technically calculating the distance between the orbits of the two planets.  

Use these equations:

- Weight on New Planet = Weight on Earth * Surface Gravity of New Planet

- Distance between Planets (if Earth is further from sun) = Distance from Earth to Sun – Distance from New Planet to Sun

- Distance between Planets (if New Planet is further from sun) = Distance from New Planet to Sun – Distance from Earth to Sun

- Travel Time (in hours) = Travel Distance (in miles)/Rate (miles per hour)

HINT:  Think about how you might be able to use one of the Math functions in the cmath library to combine #2 & #3 into one calculation

| Planet  | Distance from Sun (in millions of miles) | Surface Gravity as a function of Earth's gravity |
| --------- | ------------------------------------ | --------------------------------------------|
| Mercury | 36 | 0.27 |
| Venus | 67 | 0.86 |
| Earth | 93 | 1.00 |
| Mars | 141 | 0.37 |
| Jupiter | 484 | 2.64 |
| Saturn | 886 | 1.17 |
| Uranus | 1,782 | 0.92 |
| Neptune | 2,793 | 1.44 |


Finally display the program output.  Display the travel time in years, days, and hours.  You may use 24 hours in a day and 365 days in a year (ignore leap years).

Example output (user weighs 100 lbs and wants to travel to Mercury at 50 mph):  
```
INTERPLANETARY TRAVEL:  Earth to Mercury
---------------------------------------------------
Your weight on Mercury:     27.00 lbs

Your travel time to Mercury:
     In Hours: 1140000 hours
     In Days: 47500 days
     In Years: 130.14 years
     
```

Make sure and use good design in your program.  Your program should have only one set of result-variables.  The calculations and result variables should only be written in one place in your program.  Do not duplicate the calculation and output code for each planet.  Remember the Intro to Stings lecture, you should be able to get the input only once as well, use string type variables to hold your planet names.  Make your program as efficient as possible without making it unreadable.  If your program seems long you have probably repeated code you don’t need to and can make code more efficient by taking advantage of nested selection statements.

Note:  You’re not required to use commas in your output, since this assignment is auto-graded you should not add any special formatting to your output.  

Your code should be around two pages – if you have a lot more than that something is wrong. And this program needs pseudocode.






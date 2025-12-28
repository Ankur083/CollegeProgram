class Student:

     
    #param eterized constructors
    def __init__(self, name,marks):
        self.name = name
        self.marks=marks
        print("adding new student in database..")

s1=Student("karan",97)        
print(s1.name,s1.marks)

s2=Student("arjun",88)
print(s2.name,s2.marks)

# class car:
#     color="blue"
#     brand="mercedes"

# car1=car()
# print(car1.color)
# print(car1.brand)
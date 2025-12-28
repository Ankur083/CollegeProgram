class complex:
    def __init__(self,real,imag):
        self.real=real
        self.imag=imag

    def show_number(self):
        print(self.real,"i+",self.imag,"j")

    def __add__(self,num2):
        newreal=self.real+num2.real
        newimag=self.imag+num2.imag
        return complex(newreal,newimag)
    
num1=complex(1,3)
num1.show_number()

num2=complex(3,4)
num2.show_number()

num3=num1+num2
num3.show_number()
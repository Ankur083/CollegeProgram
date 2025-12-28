class A:
    VarA = "welcome to class A"
class B:
    VarB = "welcome to class B"
class C(A,B):
    VarC="welcome to class C"

c1=C()
print(c1.VarA)
print(c1.VarB)
print(c1.VarC)

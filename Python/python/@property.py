class student:
    def __init__(self,phy,che,math):
        self.phy=phy
        self.che=che
        self.math=math

    @property
    def percentage(self):
        return str((self.phy+self.che+self.math)/3)+"%"

stu1=student(98,97,96)
print(stu1.percentage)
stu1.phy=87
print(stu1.percentage)

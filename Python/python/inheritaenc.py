class car:
    color="black"
    @staticmethod
    def start():
        print("car started..")

    @staticmethod
    def stop():
        print("car stopped..")

class Toyotacar(car):
    def _init_(self,name):
        self.name=name

car1 = Toyotacar("fortuner")
car2 = Toyotacar("prius")

print(car1.start())





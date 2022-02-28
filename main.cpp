#include <iostream>
#include <string>

class Phone
{
  long phoneno;
  

  public:
  void SetPhoneNo(long PhoneNo)
  { 

    phoneno = PhoneNo;

  }

  public:
  long GetPhoneNo()
  {
    long PhoneNo = 1234567890;

    return PhoneNo; 
  }

  public:
  void Call()
  {
    std::cout << "Phone No: " << phoneno << std::endl; 
  }

};

int main() 
{
  Phone phone;

  phone.GetPhoneNo();
  phone.Call(); 
}

#include<iostream>
using namespace std;
class shop
{   private:
    int itemid[100];
    int itemprice[100];
    int counter=0;
    public:
    void setitemprice (void);
    void display(void);
};
void shop::setitemprice(void)
{
    cout<<"Enter the itemid : ";
    cin>>itemid[counter];
    cout<<"Enter the itemprice : ";
    cin>>itemprice[counter];
    counter++;
}

void shop::display(void)
{
 for(int i=0;i<counter;i++)
    cout<<"the item id of product "<<i<<" is "<<itemid[i]<<" and the price is "<<itemprice[i]<<endl;
}

int main()
{
  shop ob;
  ob.setitemprice();
  ob.setitemprice();
  ob.setitemprice();
  ob.display();
  return 0;
}
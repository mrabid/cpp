#include<iostream>
#include<stdlib.h>
#include<cstring>

using namespace std;

int main(int argc, char const*argv[])
{
    string input;
    cin>>input;
    if(input == "vertebrado")
         {
            cin>>input;
            if(input == "ave")
              {
                cin>>input;
                if(input == "carnivoro")
                  {
                     cout<<"aguia"<<endl;
                  }
                  else
                    {
                      cout<<"pomba"<<endl;
                    }
               }
                  else
                    {
                      cin>>input;
                      if(input == "onivoro")
                        {
                           cout<<"homen"<<endl;
                        }
                      else
                        {
                           cout<<"vaca"<<endl;
                        }
                    }
              }
              else
                {
                  cin>>input;
                  if(input == "inseto")
                {
                    cin>>input;
                    if(input == "hematofago")
                    {
                        cout<<"pulga"<<endl;
                    }
                    else
                      {
                         cout<<"lagarta"<<endl;
                      }
                }
                else
                 {
                    cin>>input;
                    if(input == "hematofago")
                    {
                        cout<<"sanguessuga"<<endl;
                    }
                    else
                        {
                          cout<<"minhoca"<<endl;
                        }
                 }

         }

    return 0;
}

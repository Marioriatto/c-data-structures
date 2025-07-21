#include<cs50.h>
#include<stdio.h>
#include<string.h>
int main()
{
string harryPotter[] = {"Hedwig", "Dumbledore", "Cedrick", "Sirius", "Lupin", "Snape", "Fred", "Dobby"}, LoTR[] = {"Aragorn","Sam","Frodo","Gandalf","Legolas","Gimli","Gollum","Bilbo"};

}
string bubbleSort(string[] list)
{
    int len = strlen(list);
    bool cambios = false;
    do
    {
    cambios = false;
    for (int i = 0; i < len; i++)
    {
        int ans = get_int("1: %s o 2: %s?",list[i],list[i + 1]);
        if (ans == 2)
        {
            string temp = list[i];
            list[i] = list[i+1];
            list[i + 1] = temp;
            cambios = true;
        }
    }
    }while(cambios);
return list;
}
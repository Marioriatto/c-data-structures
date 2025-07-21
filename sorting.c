#include<cs50.h>
#include<stdio.h>
#include<string.h>
int main()
{
string harryPotter[8] = {"Hedwig", "Dumbledore", "Cedrick", "Sirius", "Lupin", "Snape", "Fred", "Dobby"}, LoTR[8] = {"Aragorn","Sam","Frodo","Gandalf","Legolas","Gimli","Gollum","Bilbo"};

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
        int ans = get_int("Quien es mejor?\n1: %s o 2: %s\n?",list[i],list[i + 1]);
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
string mergeSort(int len, string[] list1, string[] list2)
{
    string newList[len * 2];
    for (int i = 0; i < len; i++)
    {
        int ans = get_int("Quien es mejor?\n1: %s o 2: %s\n");
        if (ans == 1)
        {
            newList[i] = list1[i];
        }
        else
        {
            newList[i] = list2[i];
        }
    }
    return newList;
}
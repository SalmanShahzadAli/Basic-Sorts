#include <iostream>

using namespace std;

void selectionSort(int array[], int size)
{
    int minindex;
    for (int i = 0; i < size; i++)
    {
        minindex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (array[j] < array[minindex])
            {
                minindex = j;
            }
        }
        if (i != minindex)
        {
            int temp = array[i];
            array[i] = array[minindex];
            array[minindex] = temp;
        }
    }
}

int main()
{

    int myArray[] = {6, 4, 2, 5, 1, 3};

    int size = sizeof(myArray) / sizeof(myArray[0]);

    selectionSort(myArray, size);
    for (int i = 0; i < size; i++)
    {
        cout << myArray[i] << " ";
    }

    /*
        EXPECTED OUTPUT:
        ----------------
        1 2 3 4 5 6

     */
}

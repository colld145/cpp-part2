#include <iostream>

using namespace std;

void InitArray(int arr[], int size){
    
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 20;
    }
}

void PrintArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void Swap(int *pa, int *pb){
    int temp = 0;
    temp = *pa;
    *pa = *pb;
    *pb = temp;
}

void SortArray(int arr[], int size){
    int temp = 0;
    for (int i = 0; i < size; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                if(arr[i] > arr[j])
                {
                    temp = arr[j];
                    arr[j] = arr[i];
                    arr[i] = temp;
                }
            }
        }
}

int main(){

    /*1. Дано масив цілих чисел. Скориставшись покажчика-
    ми, поміняйте місцями елементи масиву з парними й
    непарними індексами (тобто ті елементи масиву, які
    стоять на парних місцях, поміняйте з елементами, які
    стоять на непарних місцях).*/

    // const int size = 10;
    // int arr[size];
    // InitArray(arr, size);
    // PrintArray(arr, size);

    // for (int i = 0; i < size; i+=2)
    // {
    //     int *pa = &arr[i];
    //     int *pb = &arr[i+1];
    //     Swap(pa, pb);
    // }
    // PrintArray(arr, size);

    /*2. Дано два масиви, упорядковані за зростанням: А[n]
    та B[m]. Сформуйте масив C[n+m], що складається
    з елементів масивів А і В, упорядкований за зростан-
    ням. Використовуйте синтаксис покажчиків.*/

    // srand((unsigned)time(NULL));
    // const int size = 5;
    // int arr1[size];
    // int arr2[size];
    // const int new_size = size + size;
    // int arr3[new_size];
    // InitArray(arr1, size);
    // InitArray(arr2, size);
    // SortArray(arr1, size);
    // SortArray(arr2, size);
    // PrintArray(arr1, size);
    // PrintArray(arr2, size);

    // for (int i = 0, j = 0; i < new_size; i++)
    // {
    //     if (i < new_size/2)
    //     {
    //         int *parr = &arr1[i];
    //         arr3[i] = *parr;
    //     }
    //     else if(i >= new_size/2)
    //     {
    //         int *parr = &arr2[j];
    //         arr3[i] = *parr;
    //         j++;
    //     }
    // }
    // SortArray(arr3, new_size);
    // PrintArray(arr3, new_size);

    /*3. Дано два масиви: А[n] і B[m]. Необхідно створити
    третій масив, у якому потрібно зібрати:
    ■ Елементи обох масивів;
    ■ Загальні елементи двох масивів;
    ■ Елементи масиву A, які не включаються до B;
    ■ Елементи масиву B, які не включаються до A;
    ■ Елементи масивів A і B, які не є загальними для них
    (тобто об'єднання результатів двох попередніх варі-
    антів).*/

    srand((unsigned)time(NULL));
    const int size = 5;
    int arr1[size];
    int arr2[size];
    const int new_size = size + size;
    int arr3[new_size];
    InitArray(arr1, size);
    InitArray(arr2, size);
    PrintArray(arr1, size);
    PrintArray(arr2, size);

    // 1. 

    // for (int i = 0, j = 0; i < new_size; i++)
    // {
    //     if (i < new_size/2)
    //     {
    //         int *parr = &arr1[i];
    //         arr3[i] = *parr;
    //     }
    //     else if(i >= new_size/2)
    //     {
    //         int *parr = &arr2[j];
    //         arr3[i] = *parr;
    //         j++;
    //     }
    // }
    // PrintArray(arr3, new_size);

    // 2.

    for (int i = 0, j = 0; i < new_size; i++)
    {
        if (i < new_size/2)
        {
            int *parr = &arr1[i];
            arr3[i] = *parr;
        }
        else if(i >= new_size/2)
        {
            int *parr = &arr2[j];
            arr3[i] = *parr;
            j++;
        }
    }

    return 0;
}
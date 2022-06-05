#include <iostream>

using namespace std;

int main()
{
    /*
    const size_t s = 5;
    int arr[s] = { 1,2,3,4,5};
    cout << arr[3] << endl;
    arr[3] = 78.8;
    cout << arr[3];
    

    const size_t s = 10;
    int arr[s];
    for (int i = 0; i < s; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < s; i++) {
        cout << arr[i] << " ";
    }
*/
    /*
    Написать программу, которая записывает введенные с 
    клавиатуры данные в одномерный массив целого типа, 
    состоящий из семи элементов. Перед вводом каждого элемента 
    должна выводиться подсказка с номером элемента. 
    После ввода последнего элемента программа должна 
    вывести введенный массив и вычислить среднее арифметическое
    его элементов.
    

    const size_t s = 7;
    int arr[s];

    // заносим значения в массив
    for (int i = 0; i < s; i++) {
        cout << "Enter number for index " << i+1 << ": ";
        cin >> arr[i];
    }

    float sum = 0;
    // выводим массив и считаем сумму его элементов
    for (int i = 0; i < s; i++) {
        cout << arr[i] << " ";
        sum += arr[i];
    }
    cout << endl << "Averange: " << sum / s;
*/
    /*
    Написать программу, которая выводит минимальный 
    элемент введенного с клавиатуры массива целых чисел.
    

    const size_t s = 7;
    int arr[s];

    // заносим значения в массив
    for (int i = 0; i < s; i++) {
        cout << "Enter number for index " << i + 1 << ": ";
        cin >> arr[i];
    }
    int min = arr[0];
    for (int i = 0; i < s; i++) {
        if (min > arr[i]) 
            min = arr[i];
    }
    cout << "Minimun " << min;
*/
    /*
    Написать программу, которая вычисляет среднее 
    арифметическое ненулевых элементов введенного с 
    клавиатуры массива целых чисел.
   
    const size_t s = 10;
    int arr[s] = { 7,9,2,0,4,6,0,4,3,1 };
    size_t count = s;
    float sum = 0;
    for (int i = 0; i < s; i++) {
        sum += arr[i];
        if (arr[i] == 0) count--;
    }
    cout << " Avg: " << sum / count;
     */
    /*
    Написать программу, которая вычисляет среднее арифметическое 
    элементов массива без учета минимального и максимального 
    элементов массива.
    
    const size_t s = 10;
    int arr[s] = { 7,9,2,0,4,6,0,4,3,9 };
    int min = arr[0], max = arr[0], sum = 0, count = 0;
    // цикл вычисляет max и min
    for (int i = 0; i < s; i++) {
        if (min > arr[i]) min = arr[i];
        if (max < arr[i]) max = arr[i];

    }
    // считаем сумму без учета max и min
    for (int i = 0; i < s; i++) {
        if (arr[i] != max && arr[i] != min) {
            sum += arr[i];
            count++;
        }
    }
    cout << (float)(sum) / count;
*/
    /*
    Написать программу, которая определяет количество учеников 
    в классе, чей рост превышает средний.
    
    double arrStudent[5] = { 152.6, 174, 160.05, 155.78, 147.99 };
    double sum = 0, avg;
    for (int i = 0; i < 5; i++) {
        sum += arrStudent[i];
    }
    avg = sum / 5;
    int count = 0;
    for (int i = 0; i < 5; i++) {
        if (avg <= arrStudent[i]) count++;
    }
    cout << count;
    */

    /*
    Объединить два массива в один без повторений
    
    const size_t s = 5;
    size_t s1 = 0, temp = 0;
    int arr[s] = { 7,8,9,1,5 };
    int arr2[s] = { 2,6,7,2,1 };
    for (int i = 0; i < s; i++) {
        for (int j = 0; j < s; j++) {
            if (arr[i] == arr[j])
                temp++;
            if (arr[i] == arr2[j])
                temp++;
        }
        if (temp == 1) s1++;
        temp = 0;       
    }
    for (int i = 0; i < s; i++) {
        for (int j = 0; j < s; j++) {
            if (arr2[i] == arr2[j])
                temp++;
            if (arr2[i] == arr[j])
                temp++;
        }
        if (temp == 1) s1++;
        temp = 0;
    }
    cout << endl << s1 << endl;
    
    int* arr3 = new int[s1];
    int temp_arr = 0;

    for (int i = 0; i < s; i++) {
        for (int j = 0; j < s; j++) {
            if (arr[i] == arr[j])
                temp++;
            if (arr[i] == arr2[j])
                temp++;
        }
        if (temp == 1) { 
            arr3[temp_arr] = arr[i];
            temp_arr++;
        }
        temp = 0;
    }
    for (int i = 0; i < s; i++) {
        for (int j = 0; j < s; j++) {
            if (arr2[i] == arr2[j])
                temp++;
            if (arr2[i] == arr[j])
                temp++;
        }
        if (temp == 1) {
            arr3[temp_arr] = arr2[i];
            temp_arr++;
        }
        temp = 0;
    }

    for (int i = 0; i < s1; i++) {
        cout << arr3[i] << " ";
    }
*/
/*
Написать программу, которая проверяет, находится ли введенное 
с клавиатуры число в массиве.


    const size_t s = 10;
    int arr[s] = { 7,9,2,0,4,6,0,4,3,9 };

    int n;
    cin >> n;
    bool f = false;
    for (int i = 0; i < s; i++) {
        if (n == arr[i]) {
            f = true;
            break;
        }        
    }
    (f)? cout << "Yes": cout << "No";
*/
/*
Написать программу, которая вычисляет, сколько раз введенное 
с клавиатуры число встречается в массиве.

    const size_t s = 10;
    int arr[s] = { 7,9,2,0,4,6,0,4,3,9 };

    int n, count = 0;
    cin >> n;
    for (int i = 0; i < s; i++) {
        if (n == arr[i]) {
            count++;
        }
    }
    cout << count;
    */
/*
Написать программу, которая проверяет, есть ли во введенном 
с клавиатуры массиве элементы с одинаковым значением.

setlocale(LC_ALL, "");
const size_t s = 10;
int arr[s] = { 7,9,2,0,4,6,0,4,3,9 };
bool f = false;
for (int i = 0; i < s-1; i++) {
    for (int j = i + 1; j < s; j++) {
        if (arr[i] == arr[j]) {
            f = true;
            break;
        }
    }
    if (f) break;
}
 (f)? cout << "Совпадения есть": cout << "Совпадений нет";
 */
/*
Написать, программу, которая вычисляет прибыль фирмы за 6 месяцев. 
Пользователь вводит прибыль фирмы за каждый месяц.


    const int c = 6;
    float money[c];
    float m, sum = 0;
    int i = 0;
    while (i < c)
    {
        cin >> m;
        money[i] = m;
        sum += money[i];
        i++;
    }
    cout << sum;
    */
/*
Написать программу, которая выводит одномерный массив 
в обратном порядке.

const size_t s = 10;
int arr[s] = { 7,9,2,0,4,6,0,4,3,9 };

for (int i = s - 1; i >= 0; i--) {
    cout << arr[i] << " ";
}
*/
/*
Пользователь вводит длину сторон пятиугольника, каждая сторона 
заноситься в массив, необходимо вычислить периметр пятиугольника 
(периметр — сумма всех сторон).

    const size_t n = 5;
    int recArr[n];
    int P = 0;
    for (int i = 0; i < n; i++) {
        cin >> recArr[i];
        P += recArr[i];
    }
    cout << P;
    */
/*
Пользователь вводит прибыль фирмы за год (12 месяцев). 
Необходимо определить месяц, в котором прибыль была максимальна 
и месяц, в котором прибыль была минимальна.
*/
    string month[12] = 
    { 
    "Январь",
    "Февраль",
    "Апрель",
    "Март",
    "Май",
    "Июнь",
    "Июль",
    "Август",
    "Сентябрь",
    "Октябрь",
    "Ноябрь",
    "Декабрь" 
    };
    double money_month[12];
    cin >> money_month[0];
    double max = money_month[0], min = money_month[0];
    for (int i = 1; i < 12; i++) {
        cin >> money_month[i];
        if (max < money_month[i]) max = money_month[i];
        if (min > money_month[i]) min = money_month[i];
    }
    for (int i = 1; i < 12; i++) {
        if (max == money_month[i]) cout << "Максимальная прибыль: " 
                                        << month[i];
        if (min == money_month[i]) cout << "Минимальная прибыль: " 
                                        << month[i];
    }
}
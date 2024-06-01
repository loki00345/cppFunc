//#include <iostream>
//#include <ctime>
//
//// Високосний якщо ділиться на 4 та 400 + НЕ ділиться на 100  https://uk.wikipedia.org/wiki/%D0%92%D0%B8%D1%81%D0%BE%D0%BA%D0%BE%D1%81%D0%BD%D0%B8%D0%B9_%D1%80%D1%96%D0%BA
//bool isLeapYear(int year) {
//    if (year % 4 != 0) return false;
//    if (year % 100 != 0) return true;
//    if (year % 400 != 0) return false;
//    return true;
//}
//
//
//int daysBetweenDates(int year1, int month1, int day1, int year2, int month2, int day2) {
//    std::tm date1 = { 0, 0, 0, day1, month1 - 1, year1 - 1900 };
//    std::tm date2 = { 0, 0, 0, day2, month2 - 1, year2 - 1900 };
//
//    std::time_t time1 = std::mktime(&date1);
//    std::time_t time2 = std::mktime(&date2);
//
//    const int secondsPerDay = 60 * 60 * 24;
//    return std::difftime(time2, time1) / secondsPerDay;
//}
//
//int main() {
//    int year1 = 2020, month1 = 1, day1 = 1;
//    int year2 = 2024, month2 = 1, day2 = 1;
//
//    std::cout << "Days between dates: " << daysBetweenDates(year1, month1, day1, year2, month2, day2) << std::endl;
//
//    return 0;
//}


//#include <iostream>
//
//double average(int arr[], int size) {
//    double sum = 0;
//    for (int i = 0; i < size; i++) {
//        sum += arr[i];
//    }
//    return sum / size;
//}
//
//int main() {
//    int arr[] = { 1, 2, 3, 4, 5 };
//    int size = sizeof(arr) / sizeof(arr[0]);
//
//    std::cout << "Average: " << average(arr, size) << std::endl;
//
//    return 0;
//}


//#include <iostream>
//
//void countElements(int arr[], int size, int& positiveCount, int& negativeCount, int& zeroCount) {
//    positiveCount = 0;
//    negativeCount = 0;
//    zeroCount = 0;
//
//    for (int i = 0; i < size; i++) {
//        if (arr[i] > 0) {
//            positiveCount++;
//        }
//        else if (arr[i] < 0) {
//            negativeCount++;
//        }
//        else {
//            zeroCount++;
//        }
//    }
//}
//
//int main() {
//    int arr[] = { 1, -2, 3, 0, -5, 0, 6 };
//    int size = sizeof(arr) / sizeof(arr[0]);
//
//    int positiveCount, negativeCount, zeroCount;
//    countElements(arr, size, positiveCount, negativeCount, zeroCount);
//
//    std::cout << "Positive elements: " << positiveCount << std::endl;
//    std::cout << "Negative elements: " << negativeCount << std::endl;
//    std::cout << "Zero elements: " << zeroCount << std::endl;
//
//    return 0;
//}


#include <iostream>

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    int num1 = 56, num2 = 98;
    std::cout << "GCD of " << num1 << " and " << num2 << " is " << gcd(num1, num2) << std::endl;
    return 0;
}

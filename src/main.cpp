#include <iostream>
#include <vector>

const int n = 4;

void fillingArray(float (&arr)[n][n], int n){
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){      
      std::cin >> arr[i][j];
    }
  }
}

void fillingVector(std::vector<float> (&vec), int n){
  float valueVec;
  for(int i = 0; i < n; i++){
    std::cin >> valueVec; 
    vec[i] = valueVec;
  }
}

void printArr(float (&arr)[n][n], int n){
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      std::cout << arr[i][j];
    }
    std::cout << std::endl;
  }
}

void printVec(std::vector<float> (&vec), int n){
  for(int i = 0; i < n; i++){
    std::cout << vec[i] << " ";
  }
}

int main(){
  std::cout << "Multiplying_matrix_vector" << std::endl;
  
  float arr[n][n];
  std::vector <float> vec(n);
  std::cout << "Vector" << std::endl;
  fillingVector(vec, n);
  std::cout << std::endl; 
  std::cout << "Matrix" << std::endl;
  fillingArray(arr, n);
  std::cout << std::endl;  
  std::cout << "Print matrix" << std::endl;
  printArr(arr, n);
  std::cout << std::endl; 
  std::cout << "Print vector" << std::endl;
  printVec(vec, n);

  return 0;
}

// Умножение матрицы на вектор

// Реализуйте частный случай умножения матрицы на матрицу, 
// а именно — умножение вектора на матрицу. 
// Данная операция также весьма распространена в 
// компьютерной индустрии в целом и в компьютерное 
// графике в частности, поэтому это будет хорошим упражнением.

// Итак, у нас есть 4-х компонентный вектор V 
// представленный с помощью массива, и матрица 
// M размером 4х4, представленная в виде двумерного массива. 
// Их произведением будет новый 4-х компонентный вектор R. 
// Его компоненты будут суммой произведений компонент 
// вектора V на строку матрицы M. Индекс столбца при 
// этом равен индексу соответствующей компоненты вектора R, 
// который мы и рассчитываем в текущий момент времени.

// Все входные данные, матрица M и вектор V вносятся 
// из пользовательского ввода.  Итоговый вектор R 
// надо вывести в консоль (std::cout). Тип данных 
// элементов - всегда float. Желательно реализовать 
// этот алгоритм с помощью вложенного цикла на умножение колонки.
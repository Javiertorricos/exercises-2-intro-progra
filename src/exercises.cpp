
#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1) {
  // TODO: YOUR CODE HERE
  
  for (int i = 0; i <= s1.size(); ++i){
    if(s1[i] == ' ') {
      cout << i << endl;
    }
  }
  cout << s1.size() << endl; 

}

void exercise_2(string s1) {
  // TODO: YOUR CODE HERE
  string word;
  for (int i = 0; i <= s1.size(); ++i) {
    if(s1[i] == ' ' || i == s1.size()) {
      if (!word.empty()) {
        cout << "[" << word << "]" << endl;
        word = "";
      }
    } 
    else {
      word += s1[i];
    }
  }
}

void exercise_3(string s1) {
  // TODO: YOUR CODE HERE
for(int i = 0; i < s1.size(); i++){
  char halo = s1[i];
  if (i > 19){
    break;
  }
  if(halo == '0'){
    cout << "No cake :(" << endl;
    break;
  }
  else if(halo == '1'){
    cout << "Om-nom-nom :P" << endl;
  }
}
}

void exercise_4(int n) {
  // TODO: YOUR CODE HERE
  int i = 1;
  int multiplo = 1;
  if(n < 0){
    cout << "El numero es negativo. Intentelo de nuevo" << endl;
  }
  else if(n > 14){
    cout << "El numero es muy grande. Intentelo de nuevo" << endl;
  }
  else if(n>=0 && n <=14){
    while(i<=n){
      multiplo *=i;
      ++i;
    }
    cout << multiplo << endl;
  }
}

void exercise_5(int n, int k) {
  // TODO: YOUR CODE HERE
}

int exercise_6(int n) {
  // TODO: YOUR CODE HERE
 cin >> n; 
int sum = 0;
while(n > 0){
  sum = sum + n%10;
  n = n/10;
}
  return sum;
}

void exercise_7(int n) {
  // TODO: YOUR CODE HERE
  cin >> n;
    double result = 0;
    for(int i = 1; i <= n; i++){
    result += pow(-1,i+1)/i;
}
cout << result << endl;
}

void exercise_8(string s) {
  // TODO: YOUR CODE HERE
}

void exercise_9(string s) {
  // TODO: YOUR CODE HERE
  int cant = 0;
  int seg = 0;
  for(int i = 0; i <= s.size(); ++i){
    if(s[i] == 'f'){
      seg = i;
      ++cant;
    }
  }
  switch(cant){
    case 0:
    cout << -2 << endl;
    break;
    case 1:
    cout << -1 << endl;
    break;
    case 2:
    cout << seg << endl;
    break;
  }
}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
  return 0;
}

void exercise_11() {
  // TODO: YOUR CODE HERE
  double Ui = 1;
  cout << "U0 = 1" << endl;
  for(int i = 1; 10 >= i; ++i){
    double total = Ui/( i + 1);
    cout << "U" << i << " = " << Ui << endl;
    Ui = total;
  }
}

void exercise_12() {
  // TODO: YOUR CODE HERE
  double Ui = 1;
  double U = Ui;
  for(int i = 1; 10 >= i; ++i){
    int Vi = U;
    double result = Ui/(i +1);
    cout << "U" << i << " = " << Ui << " " << "V" << i << " = " << Vi << endl;
    Ui = result
  }
}

long exercise_13(int n, int k) {
  // TODO: YOUR CODE HERE
  cin >> n;
  cin >> k;
  int res =0;
  for(int i = 1; i <= n; i++){
    res += pow(i,k);
  }
  return res;
}

string exercise_14(int n) {
  // TODO: YOUR CODE HERE
  return "";
}

void exercise_15(int decimal) {
  // TODO: YOUR CODE HERE
}

void exercise_16(int divident, int divider) {
  // TODO: YOUR CODE HERE
  int cociente = 0;
  int resto = divident;
  int i = 0;
    if(divider!=0){
        for(i; resto-divider >= 0; ++i){
          resto = resto - divider;
        }
        cociente = i;
        cout << cociente << " ";
        cout << resto << endl;
    }
}

void exercise_17(int n) {
  // TODO: YOUR CODE HERE
}

void exercise_18_19(int debut, int fin) {
  // TODO: YOUR CODE HERE
}
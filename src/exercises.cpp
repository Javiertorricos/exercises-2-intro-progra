
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

   string espacio1;
    switch(n){
        case 1:
            espacio1 =  " "s;
            break;
        case 2:
            espacio1 =  "  "s;
            break;
        case 3:
            espacio1 =  "     "s;
            break;
        case 4:
            espacio1 =  "        "s;
            break;
        case 5:
            espacio1 =  "           "s;
            break;
        case 6:
            espacio1 =  "              "s;
            break;
        case 7:
            espacio1 =  "                 "s;
            break;
    }
    
    string _i;
    for(int i = 1; i<=k; ++i){
        int s = 20;
        int r = 0;
        while(r<=14){
            if(espacio1.size()== s+(s*r) + r){
                espacio1= espacio1 + '\n';
                break;
            }
            ++r;
        }
        if(n==1 && espacio1.size()==1){
            espacio1 = espacio1 + to_string(i);
        }
        else if(to_string(i).size()==1 && espacio1[espacio1.size()-1]!='\n'){
            _i = "  " + to_string(i);
            espacio1 = espacio1 + _i;
        }else if(to_string(i).size()==1 && espacio1[espacio1.size()-1]=='\n'){
            _i = " " + to_string(i);
            espacio1 = espacio1 + _i;
        
        }else if(to_string(i).size()==2 && espacio1[espacio1.size()-1]!='\n'){
            _i = " " + to_string(i);
            espacio1 = espacio1 + _i;
        }else if(to_string(i).size()==2 && espacio1[espacio1.size()-1]=='\n'){
            espacio1 = espacio1 + to_string(i);
        }
        
    }
    cout << espacio1 << " " << endl;
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
int s_size=s.size();
    string s_2;
    for(int i=0;s_size-1>=i ; ++i){

        char s_letter = s[i];
        if(s_letter!=' '){
            s_2 = s_2 + s_letter;
        }
    }
    bool ESPalindromo = true;
    int n = s_2.size();

    for (int i = 0; i < n / 2; ++i) {
        if (s_2[i] != s_2[n - 1 - i]) {
            ESPalindromo = false;
            break;
        }
    }

    if(ESPalindromo) {
        cout << "YES" << endl;
    }else {
        cout << "NO" << endl;
    }  
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
int MCD = 1;
    if(a==0){
      return b;
    }else if(b==0){
      return a;
    }else{
    for(int i=2; a>=i && b>=i; ++i){

        while(a%i==0 && b%i==0){
            MCD = MCD *i;
            a = a/i;
            b = b/i;
        }
    }
  }
  return MCD;
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
    Ui = result;
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
string n_strings = to_string(n);
    bool ESPalindromo = true;
    for(int i=0; n_strings.size()>=i; ++i){
        if(n_strings[i] != n_strings[n_strings.size()-1-i]){
            ESPalindromo = false;
        }
    }
    if(ESPalindromo){
            return "Es palindrome";
        }else{
            return "No es palindrome";
        }
}

void exercise_15(int decimal) {
    string binary;
    string result;
    if(decimal==0){
        result = '0';
            
    }else if(decimal == 1){
        result = '1';

    }else{ 
        for(int i = 0; decimal!=1 ; ++i){
           
            binary = binary + to_string(decimal%2);
            decimal = decimal/2;

    
        }
        binary = binary + '1';

        for(int i = 1; binary.size()>=i; ++i){
            result = result + binary[binary.size()-i];

        }
    }
        cout << result << endl;
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
    int i = 0; 
    int  k = 2; 
    
    while (n > i) {
        bool esPrimo = true;
        
        for (int i = 2; i <= k/2; ++i) {
            if (k % i == 0) {
                esPrimo = false;
                break; 
            }
        }
        
        if (esPrimo) {
            cout << k << " "; 
            ++i; 
        }
        
        ++k; 
    }  
}

void exercise_18_19(int debut, int fin) {
  if(fin>=debut){
    if(debut>0 && fin>0){
        for(debut; debut<=fin; ++debut){
            int i = 0;
            int debut1= debut;
            while(debut1!=0){
                if(debut1%3 == 0){
                    debut1 += 4;
                    ++i;
                }else if(debut1%4==0){
                    debut1 /=2;
                    ++i; 
                }else{
                    --debut1;
                    ++i;
                }
            }
            cout << debut << "->" << i << endl;
        }
    }else{
            cout << "El numero debe de ser positivo y mayor a zero" << endl;
        }
    }else{
        cout << "El numero de fin no debe de ser menor al inicial" << endl;
    }
}
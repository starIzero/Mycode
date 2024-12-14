#include <iostream>
#include <iomanip>
using namespace std;

void printHeader() {
    cout << "P\tQ\t合取\t析取\t条件\t双条件\t否定P" << endl;
    cout << "----------------------------------------" << endl;
}

void printTruthTable() {
    bool P[] = {true, true, false, false};
    bool Q[] = {true, false, true, false};
    
    printHeader();
    
    for(int i = 0; i < 4; i++) {
        // 输出P和Q的值
        cout << P[i] << "\t" << Q[i] << "\t";
        
        // 合取 (AND, ∧)
        cout << (P[i] && Q[i]) << "\t";
        
        // 析取 (OR, ∨)
        cout << (P[i] || Q[i]) << "\t";
        
        // 条件 (蕴含, →)
        cout << (!P[i] || Q[i]) << "\t";
        
        // 双条件 (等价, ↔)
        cout << (P[i] == Q[i]) << "\t";
        
        // 否定P (¬)
        cout << (!P[i]) << endl;
    }
}

int main() {
    printTruthTable();
    return 0;
}

// Recursion
// Recursion is the technique of making a function call itself. This technique provides a way to break complicated problems down into simple problems which are easier to solve.

// Recursion may be a bit difficult to understand. The best way to figure out how it works is to experiment with it.


#include <iostream>
using namespace std;

int sum(int k){
    if (k>0)
    {
        return k + sum(k-1);

    } else {

        return 0;
    }
    
}


int main(){

    int result = sum(10);
    cout << result; // 55
    return 0;

}


// 1. `int sum(int k)`: Ye ek function hai jiska naam `sum` hai. Is function ka kaam hai ki k se lekar 1 tak ke saare numbers ka sum calculate karna.

// 2. `if (k > 0)`: Ye check kar raha hai ki kya `k` zero se bada hai. Agar haan, toh hum code ke next part ko execute karte hain.

// 3. `return k + sum(k - 1);`: Ye line pe hum `k` ka value aur `sum(k - 1)` ka result add kar rahe hain. `sum(k - 1)` wapis se `sum` function ko call kar raha hai lekin is baar `k - 1` value ke saath. Isko hum recursion kehte hain.

// 4. `else { return 0; }`: Agar `k` zero ya usse chota hua toh hum function se `0` return kar dete hain. Ye recursion ko rokne ka kaam karta hai.

// 5. `int main() { int result = sum(10); cout << result; return 0; }`: Ye `main` function hai. Isme humne `sum` function ko `10` ke saath call kiya hai aur uska result `result` variable me store kiya hai. Phir humne `result` ko print kiya hai.

// Is tarah se, ye program 10 se lekar 1 tak ke saare numbers ka sum calculate karke print karta hai.



// 10 + sum(9)
// 10 + ( 9 + sum(8) )
// 10 + ( 9 + ( 8 + sum(7) ) )
// ...
// 10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + sum(0)
// 10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + 0
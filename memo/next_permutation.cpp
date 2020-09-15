/*参考
https://qiita.com/Nikkely/items/0ddca51b3c0e60afbaab
*/
//i := array[i] < array[i+1]　かつ　最大であるi
//j := 末尾から検索してはじめてあらわれる かつ　array[i] < array[j]

#include <iostream>
#include <algorithm>

bool my_next_permutation(int *array, unsigned int num)
{
    //末尾からiを検索
    for (int i = num - 2; i >= 0; i--)
    {
        if (array[i] < array[i + 1])
        {
            //末尾からjを検索
            int j = num;
            do
            {
                j--;
            } while (!(array[i] < array[j]));
            //iとjをswap
            std::swap(array[i], array[j]);
            //i+1移行を昇順にする
            std::sort(array + i+1, array + 4);
            return true;
        }
        if (i == 0)
        {
            //元に戻す
            std::reverse(array, array + num - 1);
        }
    }
    return false;
}

int main()
{
    int array[] = {1, 2, 3, 4};
    const unsigned int array_num = 4;

    do
    {
        for (int i = 0; i < array_num; i++)
        {
            std::cout << array[i] << " ";
        }
        std::cout << std::endl;
    } while (my_next_permutation(array, array_num));
}

// #include <iostream>
// #include <algorithm>

// template <class BidirectionalIterator>
// bool generic_next_permutation(BidirectionalIterator first, BidirectionalIterator last) {
//     //要素が0または1の場合は終了
//     if (first == last) return false;
//     BidirectionalIterator second = first;
//     ++second;
//     if (second == last) return false;

//     BidirectionalIterator i = last;
//     --i;   //itを最後尾にセット

//     while (true) {
//         BidirectionalIterator prev_i = i;
//         if (*(--i) < *prev_i) {
//             BidirectionalIterator j = last;
//             while (!(*i < *--j));
//             std::swap(*i, *j);
//             std::reverse(prev_i, last);
//             return true;
//         }

//         if (i == first) {
//             std::reverse(first, last);
//             return false;
//         }
//     }
// }

// int main() {
//     int array[] = {1, 2, 3, 4};
//     const int array_num = 4;

//     do {
//         for (int i = 0; i < array_num; i++) {
//             std::cout << array[i] << " ";
//         }
//         std::cout << std::endl;
//     }while (generic_next_permutation(array, array + array_num));
// }
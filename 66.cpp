# include <iostream>

void incrementArray(int arr[], int length, int amt)
{
    for (int i = 0; i < length; i++)
        arr[i] += amt;
}

int main()
{

    int array[] = {10, 20, 30, 40};
    int length = sizeof(array) / sizeof(array[0]);
    int amt = 3;

    incrementArray(array, length, amt);

    for (int i = 0; i < 4; i++)
        std::cout << array[i] << " ";

    return 0;
}

--- output ---
11 12 13 14
Write a function dotProduct that computes the dot product of two input arrays. (You'll need to include the length as the input, too.)

# include <iostream>
# include <cassert>

// write dotProd here

int main()
{

    int array1[] = {1, 2, 3, 4};
    int array2[] = {5, 6, 7, 8};
    int length = sizeof(array1) / sizeof(array1[0]);
    int ans = dotProduct(array1, array2, length);

    std::cout << "Testing...\n";
    assert(ans == 70);
    std::cout << "Success!";

    return 0;
}
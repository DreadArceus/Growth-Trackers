#include <iostream>
#include <string>
#include <vector>

void fizzBuzz(unsigned N, std::vector<unsigned> arr);

int main()
{
  unsigned N, FB; //variables for the upper limit and the number of FB triggers
  std::cin >> N >> FB;
  std::vector<unsigned> fbArr(FB); //array for storing the triggers
  for(int i = 0; i < FB; i++) { std::cin >> fbArr[i]; }
  fizzBuzz(N, fbArr);
}

void fizzBuzz(unsigned N, std::vector<unsigned> arr)
{
  for(unsigned i = 1; i <= N; i++) //loop through all the integers in range
  {
    std::string ans = ""; //empty string to store every iteration's result in
    for(int j = 0; j < arr.size() - 1; j += 2) //assigning the triggers to FB
    {
      if(i % arr[j] == 0) { ans += "Fizz" + std::to_string(arr[j]); }
      if(i % arr[j+1] == 0) { ans += "Buzz" + std::to_string(arr[j+1]);  }
    }
    if(arr.size() % 2 != 0 && i % arr[arr.size() - 1] == 0) //for odd FB
    {
      ans += "Fizz" + std::to_string(arr[arr.size()-1]);
    }
    if(ans == "") { ans += std::to_string(i);  } //if no triggers are set off
    std::cout << ans << "\n";
  }
}

#include <iostream>
using namespace std;

int main()
{
  char uin;
  cout << "Do you think a stock is going to...\n"
    << "go (U)p\n"
    << "go (D)own\n"
    << "stay the same but (F)lat\n"
    << "stay the same but (V)olatile\n"
    << "(Q)uit";
  cin >> uin;
  switch (uin) {
    case 'U':
      cout << "If you think the stock is going UP, you should...";
      break;
    case 'D':
      cout << "If you think the stock is going DOWN, you should...";
      break;
    case 'F':
      cout << "If you think the stock is going to stay the same but FLAT, you should...";
      break;
    case 'V':
      cout << "If you think the stock is going to stay the same but VOLATILE, you should...";
      break;
    case 'Q':
      cout << "Quitting! Bye-bye.";
      return 0;
    default:
      cout << "Error! Enter 'U', 'D', 'F', 'V', or 'Q'.";
      break;
  }
  return 0;
}

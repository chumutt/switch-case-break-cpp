#include <iostream>
using namespace std;

int main()
{
  char uin;
  cout << "This software does not claim to offer actual financial or\n"
    << "investment advice, it is simply meant to serve as an example.\n"
    << "Do not use this for actual investment advice,\n"
    << "this program is merely a C++ example.\n\n";
  cout << "Do you think a (hypothetical) stock is going to...\n"
    << "go (U)p\n"
    << "go (D)own\n"
    << "stay the same but (F)lat\n"
    << "stay the same but (V)olatile\n"
    << "(Q)uit: ";
  cin >> uin;
  switch (uin) {
    case 'U':
      cout << "If you think the stock is going UP, you should\n";
      cout << "buy shares, buy a call, or (very risky) sell a put.\n";
      break;
    case 'D':
      cout << "If you think the stock is going DOWN, you should\n";
      cout << "buy a put (shorting), or (very risky) sell a call.\n";
      break;
    case 'F':
      cout << "If you think the stock is going to stay the same but FLAT, you should\n";
      cout << "employ a Short Straddle options strategy.\n";
      break;
    case 'V':
      cout << "If you think the stock is going to stay the same but VOLATILE, you should\n";
      cout << "employ a Long Straddle or Long Strangle options strategy.\n";
      break;
    case 'Q':
      cout << "Quitting! Bye-bye.\n";
      return 0;
    default:
      cout << "Error! Enter 'U', 'D', 'F', 'V', or 'Q'.\n";
      break;
  }
  return 0;
}

/*
[2017-06-27] Challenge #321

Description
No more hiding from your alarm clock! You've decided you want your computer to keep you updated on the time 
so you're never late again. A talking clock takes a 24-hour time and translates it into words.

Input Description
An hour (0-23) followed by a colon followed by the minute (0-59).

Output Description
The time in words, using 12-hour format followed by am or pm.
*/
#include <iostream>
#include <string>
std::string get_time(std::string time) {
    std::string h_subs = time.substr(0, 2);
    std::string m_subs = time.substr(3);
    std::string answer = "";
    int hours = std::stoi(h_subs);
    int minutes = std::stoi(m_subs);
    std::string daynight = "am";
    if (hours > 12) 
        daynight = "pm";
    std::string tens[] = {"oh ", "", "twenty", "thirty", "fourty", "fifty"};
    std::string ones[] = {"twelve", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve",
                "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    if(minutes == 0)
        answer += ones[hours%12] + " " + daynight;
    else if (minutes % 10 == 0)
        answer += ones[hours%12] + " " + tens[minutes/10] + " " + daynight;
    else if (minutes < 10 || minutes > 20)
        answer += ones[hours%12] + " " + tens[minutes/10] + " " + ones[minutes%10] + " " + daynight;
    else
        answer += ones[hours%12] + " " + ones[minutes] + " " + daynight;
    return answer;
}

int main (){
    std::string time;
    std::cin >> time;
    std::cout << "It's " << get_time(time) << std::endl;
}

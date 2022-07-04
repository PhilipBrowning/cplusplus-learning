#include <iostream>
#include <string>
#include <list>
#include <iterator>

int main()
{
	std::list<std::string> questions = { "Question number one","Question number two"};
	std::list<std::string> answers = { "foo","bar" };

	//for (auto x : questions) 
	//{
	//	std::cout << x << std::endl;

	//}
	auto ans = answers.begin();
        int index = 0;	

	for (auto i = questions.begin(); i != questions.end(); ++i)
	{
            std::cout << *i << std::endl;
            std::string &question = *i;
	    std::advance(ans, index);
	    std::cout << *ans << "\n";
	    index++;
            //for (auto x = answers.begin(); x != answers.end(); ++x)
            //{

            //	std::string &answer = *x;
            	//std::string response;

            	//std::cin >> response;
            //	if (answer.compare(response) == 0)
            //	{
            //		// todo if answer is wrong doesn't break and say wrong answer
            //		std::cout << "Correct the answer is " << answer << std::endl;
            		//break;
            //	}
	    //	else
	    //	{
	    //		std::cout << "Wrong answer" << std::endl;
	    //	}
            }
    return 0;

}

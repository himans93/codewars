#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include <map>

#define print_line std::cout << __LINE__ << std::endl;

std::string duplicate_encoder(const std::string& word){
	
    std::cout << "input:" << word << std::endl;

	std::map<char, std::pair<size_t, bool>> track{};
    //std::map<char, size_t> track{};

	std::string strout(word);
	
	for( int i = 0; i < word.size(); i++) {

		char in = std::tolower(word[i]);
        std::cout << "i:" << i << " in:" << in << std::endl;
		char& out = strout[i];

        {
            std::cout << "track start ";
            std::cout << "size:" << track.size() << std::endl;
            for( const auto& x: track ) {
                std::cout << x.first << " " <<  x.second.first << " " << 
                    x.second.second << std::endl;
            }

			auto itr = track.find(std::tolower(word[i]));
			if ( itr != track.end()) {
                //now adjust the state of the already inserted element if not done
				std::cout << "match" << std::endl;
                std::cout << "og:" << itr->first << std::endl;
                std::cout << "og:" << itr->second.first << std::endl;
                std::cout << "og:" << itr->second.second << std::endl;
                if ( itr->second.second == false){
                   strout[itr->second.first] = ')';
                   itr->second.second = true;     
                }
				out = ')';
			} else {                
				//match found
                std::cout << "no match" << std::endl;                
				track.insert({in,{i,false}});
				out = '(';
			}

            //for( const auto & x: strout) {
            //    std::cout << x << " ";
            //}
            //std::cout << std::endl << std::endl;

            std::cout << "track end ";
            std::cout << "size:" << track.size() << std::endl;
            for( const auto& x: track ) {
                std::cout << x.first << " " <<  x.second.first << " " << 
                    x.second.second << std::endl;
            }
		}

        std::cout << "out:" << strout << std::endl;
        for( const auto & x: strout) {
            std::cout << x << " ";
        }
        std::cout << std::endl << std::endl;
	}
	
    //std::cout << "size:" << track.size() << std::endl;
	//for( const auto& x: track ) {
	//	std::cout << x.first << " " <<  x.second.first << " " << 
    //        x.second.second << std::endl;
    //}

  std::cout << "output:" << strout << std::endl;  
  return strout;
}

int main()
{
    //std::cout<<"Hello World";
    //std::string str = "H yM_xqSS";
    std::string str = "HSS";
    auto result = duplicate_encoder(str);
    std::cout << "result: ";
    for( const auto & x: result) {
        std::cout << x << " ";
    }
    return 0;
}

#ifndef _SORT_H
#define _SORT_H

#include<iostream>
#include<vector>

namespace alg{
    template<typename T>
    class SortClass{
    public:
        SortClass(vector<T> &m){
            m_list=m;
        }
        ~SortClass(){

        }
        void quick(){
            
        }
    private:
        vector<T>m_list;

    };
};
#endif // !_SORT_H

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 04:49:35 by iqabbal           #+#    #+#             */
/*   Updated: 2022/11/15 06:42:38 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

int File::replace( std::string to_find,std::string to_replace)
{
    std::fstream file;
     std::fstream file1;
    file.open(fileName,std::ios::in);
    if(file.fail())
    {
        std::cout << "Error!! The File is not Found" << std::endl;
        return(0);
    }
    else
    {
        std::string content;
        std::string content_file;
        while(!file.eof())
        {
            getline(file,content);
            content = content + "\n";
            content_file = content_file + content;
        }
        std::cout << content_file << "\n*****************\n";
        std::string new_content = "";
        int cv = 0;
        while(1)
        {
             int index = content_file.find(to_find);
             if(index < 0)
                 break;
             int leng = to_find.length();
             int i = index + leng;
             int count = 0;
             while(content_file[i++])
                 count++;
             new_content = new_content + content_file.substr(0,index) + to_replace;
             std::cout << new_content;
             content_file.erase(0,index + leng);
             std::cout << "\n*****************\n";
             std::cout << content_file;
             
        }
        new_content = new_content + content_file;
        file1.open(fileName+".replace",std::ios::out);
        file1 << new_content;
        file.close();
        file1.close();
        
    }
    return(1);
}
File::File(std::string file_name)
{
    fileName = file_name;
}

File::~File()
{
}
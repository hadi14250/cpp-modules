/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaddou <hakaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 19:25:26 by hakaddou          #+#    #+#             */
/*   Updated: 2023/03/10 21:19:37 by hakaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void replace_all(std::string& str, const std::string& s1, const std::string& s2) {
    size_t start_pos = 0;
    while ((start_pos = str.find(s1, start_pos)) != std::string::npos) {
        str.erase(start_pos, s1.length());
        str.insert(start_pos, s2);
        start_pos += s2.length();
    }
}

int main(int argc, char** argv) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <filename> <string1> <string2>" << std::endl;
        return 1;
    }
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::ifstream infile(filename.c_str());
    if (!infile.is_open()) {
        std::cerr << "Error: Cannot open input file " << filename << std::endl;
        return 1;
    }
    std::string outfilename = filename + ".replace";
    std::ofstream outfile(outfilename.c_str());
    if (!outfile.is_open()) {
        std::cerr << "Error: Cannot open output file " << outfilename << std::endl;
		infile.close();
        return 1;
    }
    std::string line;
    while (std::getline(infile, line)) {
        replace_all(line, s1, s2);
        outfile << line << std::endl;
    }
    return 0;
}

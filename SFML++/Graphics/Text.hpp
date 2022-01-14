#pragma once
#ifndef TEXT_HPP_INCLUDED
#define TEXT_HPP_INCLUDED
#include <SFML++/Graphics/Graphics.hpp>

class Brabbadon::SFML::Graphics::Text : public sf::Text
{
public:
    sf::Font font_;

    Text();
    Text(std::string string);
    Text(std::string string, sf::Font &font);
    Text(std::string string, sf::Font &font, int size);
    Text(std::string string, sf::Font &font, int size, sf::Color color);

    void setTextInt(int inputText);
    void drawText(sf::RenderWindow &window);
};

#endif

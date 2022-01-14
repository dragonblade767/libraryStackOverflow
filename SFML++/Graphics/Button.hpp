#pragma once
#ifndef BUTTON_HPP_INCLUDED
#define BUTTON_HPP_INCLUDED
#include <SFML++/Graphics/Graphics.hpp>
#include <SFML++/Graphics/Text.hpp>
#include <SFML++/Graphics/Sprite.hpp>

class Brabbadon::SFML::Graphics::Button
{
public:
    sf::Image im;
    sf::Texture tex;
    sf::Text text;
    sf::Font font;
    sf::Sprite body;
    Button(int x, int y, std::string inputText);
    Button();
    Button(std::string imagePath, std::string fontPath);
    void draw(sf::RenderWindow &window);
    void setPosition(int x, int y);
    bool mouseHover(sf::RenderWindow &window);
    bool mouseClick(sf::RenderWindow &window);
    void string(std::string someString);
};

#endif

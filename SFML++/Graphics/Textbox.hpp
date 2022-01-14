#pragma once
#ifndef TEXTBOX_HPP_INCLUDED
#define TEXTBOX_HPP_INCLUDED
#include <SFML++/Graphics/Graphics.hpp>

class Brabbadon::SFML::Graphics::Textbox
{
public:
    sf::Font font;
    sf::RectangleShape rectangle, errorBox;
    sf::Text text;
    std::string textString;
    bool active = false;
    bool correct = true;
    bool cryptic = false;

    Textbox(bool password);
    Textbox();
    void setPosition(int x, int y);
    void draw(sf::RenderWindow &window);
    std::string stars(std::string password);
    void typing(char letter);
    bool mouseHover(sf::RenderWindow &window);
    bool mouseClick(sf::RenderWindow &window);
    void clear();
};

#endif


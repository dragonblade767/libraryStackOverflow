#pragma once
#ifndef SFML_HPP_INCLUDED
#define SFML_HPP_INCLUDED
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Network.hpp>
#include <Brabbadon.hpp>
class Brabbadon::SFML
{
public:
    class Audio;
    class Graphics;
    class Network;
};
#include "Audio/Audio.hpp"
#include "Graphics/Graphics.hpp"
#include "Network/Network.hpp"
#endif

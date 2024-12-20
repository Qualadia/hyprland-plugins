#pragma once

#include <hyprland/src/plugins/PluginAPI.hpp>
#include <hyprland/src/render/Texture.hpp>

inline HANDLE PHANDLE = nullptr;

struct SHyprButton {
    std::string  cmd     = "";
    CHyprColor   col     = CHyprColor(0, 0, 0, 0);
    float        size    = 10;
    std::string  icon    = "";
    SP<CTexture> iconTex = makeShared<CTexture>();
};

class CHyprBar;

struct SGlobalState {
    std::vector<SHyprButton> buttons;
    std::vector<CHyprBar*>   bars;
};

inline std::unique_ptr<SGlobalState> g_pGlobalState;

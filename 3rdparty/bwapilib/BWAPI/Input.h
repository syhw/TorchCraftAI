#pragma once
namespace BWAPI
{
  /// <summary>An enumeration of mouse button inputs.</summary>
  /// @see Game::getMouseState
  enum MouseButton
  {
    M_LEFT = 0,
    M_RIGHT,
    M_MIDDLE,
    M_MAX,
  };

  /// <summary>An enumeration of keyboard input values.</summary>
  /// @see Game::getKeyState
  enum Key
  {
    K_LBUTTON = 0x01,
    K_RBUTTON,
    K_CANCEL,
    K_MBUTTON,
    K_XBUTTON1,
    K_XBUTTON2,
    __UNDEFINED_7,
    K_BACK,
    K_TAB,
    __RESERVED_A,
    __RESERVED_B,
    K_CLEAR,
    K_RETURN,
    __UNDEFINED_E,
    __UNDEFINED_F,
    K_SHIFT,
    K_CONTROL,
    K_MENU,
    K_PAUSE,
    K_CAPITAL,
    K_KANA,
    K_UNDEFINED_16,
    K_JUNJA,
    K_FINAL,
    K_KANJI,
    __UNDEFINED_1A,
    K_ESCAPE,
    K_CONVERT,
    K_NONCONVERT,
    K_ACCEPT,
    K_MODECHANGE,
    K_SPACE,
    K_PRIOR,
    K_NEXT,
    K_END,
    K_HOME,
    K_LEFT,
    K_UP,
    K_RIGHT,
    K_DOWN,
    K_SELECT,
    K_PRINT,
    K_EXECUTE,
    K_SNAPSHOT,
    K_INSERT,
    K_DELETE,
    K_HELP,
    K_0,
    K_1,
    K_2,
    K_3,
    K_4,
    K_5,
    K_6,
    K_7,
    K_8,
    K_9,
    __UNDEFINED_3A,
    __UNDEFINED_3B,
    __UNDEFINED_3C,
    __UNDEFINED_3D,
    __UNDEFINED_3E,
    __UNDEFINED_3F,
    __UNDEFINED_40,
    K_A,
    K_B,
    K_C,
    K_D,
    K_E,
    K_F,
    K_G,
    K_H,
    K_I,
    K_J,
    K_K,
    K_L,
    K_M,
    K_N,
    K_O,
    K_P,
    K_Q,
    K_R,
    K_S,
    K_T,
    K_U,
    K_V,
    K_W,
    K_X,
    K_Y,
    K_Z,
    K_LWIN,
    K_RWIN,
    K_APPS,
    __RESERVED_5E,
    K_SLEEP,
    K_NUMPAD0,
    K_NUMPAD1,
    K_NUMPAD2,
    K_NUMPAD3,
    K_NUMPAD4,
    K_NUMPAD5,
    K_NUMPAD6,
    K_NUMPAD7,
    K_NUMPAD8,
    K_NUMPAD9,
    K_MULTIPLY,
    K_ADD,
    K_SEPARATOR,
    K_SUBTRACT,
    K_DECIMAL,
    K_DIVIDE,
    K_F1,
    K_F2,
    K_F3,
    K_F4,
    K_F5,
    K_F6,
    K_F7,
    K_F8,
    K_F9,
    K_F10,
    K_F11,
    K_F12,
    K_F13,
    K_F14,
    K_F15,
    K_F16,
    K_F17,
    K_F18,
    K_F19,
    K_F20,
    K_F21,
    K_F22,
    K_F23,
    K_F24,
    __UNASSIGNED_88,
    __UNASSIGNED_89,
    __UNASSIGNED_8A,
    __UNASSIGNED_8B,
    __UNASSIGNED_8C,
    __UNASSIGNED_8D,
    __UNASSIGNED_8E,
    __UNASSIGNED_8F,
    K_NUMLOCK,
    K_SCROLL,

    K_OEM_NEC_EQUAL,
    K_OEM_FJ_JISHO,
    K_OEM_FJ_MASSHOU,
    K_OEM_FJ_TOUROKU,
    K_OEM_FJ_LOYA,
    __UNASSIGNED_97,
    __UNASSIGNED_98,
    __UNASSIGNED_99,
    __UNASSIGNED_9A,
    __UNASSIGNED_9B,
    __UNASSIGNED_9C,
    __UNASSIGNED_9D,
    __UNASSIGNED_9E,
    __UNASSIGNED_9F,
    K_LSHIFT,
    K_RSHIFT,
    K_LCONTROL,
    K_RCONTROL,
    K_LMENU,
    K_RMENU,
    K_BROWSER_BACK,
    K_BROWSER_FORWARD,
    K_BROWSER_REFRESH,
    K_BROWSER_STOP,
    K_BROWSER_SEARCH,
    K_BROWSER_FAVORITES,
    K_BROWSER_HOME,
    K_VOLUME_MUTE,
    K_VOLUME_DOWN,
    K_VOLUME_UP,
    K_MEDIA_NEXT_TRACK,
    K_MEDIA_PREV_TRACK,
    K_MEDIA_STOP,
    K_MEDIA_PLAY_PAUSE,
    K_LAUNCH_MAIL,
    K_LAUNCH_MEDIA_SELECT,
    K_LAUNCH_APP1,
    K_LAUNCH_APP2,
    __RESERVED_B8,
    __RESERVED_B9,
    K_OEM_1,
    K_OEM_PLUS,
    K_OEM_COMMA,
    K_OEM_MINUS,
    K_OEM_PERIOD,
    K_OEM_2,
    K_OEM_3,

    K_OEM_4 = 0xDB,
    K_OEM_5,
    K_OEM_6,
    K_OEM_7,
    K_OEM_8,
    __RESERVED_E0,
    K_OEM_AX,
    K_OEM_102,
    K_ICO_HELP,
    K_ICO_00,
    K_PROCESSKEY,
    K_ICO_CLEAR,
    K_PACKET,
    __UNASSIGNED_E8,
    K_OEM_RESET,
    K_OEM_JUMP,
    K_OEM_PA1,
    K_OEM_PA2,
    K_OEM_PA3,
    K_OEM_WSCTRL,
    K_OEM_CUSEL,
    K_OEM_ATTN,
    K_OEM_FINISH,
    K_OEM_COPY,
    K_OEM_AUTO,
    K_OEM_ENLW,
    K_OEM_BACKTAB,

    K_ATTN,
    K_CRSEL,
    K_EXSEL,
    K_EREOF,
    K_PLAY,
    K_ZOOM,
    K_NONAME,
    K_PA1,
    K_OEM_CLEAR,
    K_MAX
  };
}

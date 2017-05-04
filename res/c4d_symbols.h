#pragma once
enum
{
  _FIRST_ELEMENT_ = 10000,
  // Dialog definitions of DRAWHELPER_EDITOR start here
  DRAWHELPER_EDITOR,
  BTN_COMMIT,
  EDT_SOURCE,
  // Dialog definitions of DRAWHELPER_EDITOR end here

  // c4d-ide symbols
  GROUP_MAIN,
  STATIC_STATUS,
  BUTTON_UNDO,
  BUTTON_REDO,
  BUTTON_SEND,
  BUTTON_SEND_TOOLTIP,
  TEXT_SCRIPT,

  GROUP_TRACEBACK,
  TREE_TRACEBACK,
  BUTTON_CLOSE_TRACEBACK,

  MENU_FILE,
  MENU_FILE_OPEN,
  MENU_FILE_SAVETO,

  MENU_VIEW,
  MENU_VIEW_TRACEBACK,

  MENU_HELP,
  MENU_HELP_ABOUT,

  ABOUT_LINE1,
  ABOUT_LINE2,
  ABOUT_LINE3,

  IDC_SCRIPT_EDITOR,
  IDC_SCRIPT_EDITOR_HELP,
  IDC_CODE_OK,
  IDC_NO_TRACEBACK,

  // Editor Window IDs
  IDS_EDITOR,
  IDS_EDITOR_HELP,
  IDS_EDITOR_TABS,
  IDS_EDITOR_CODE,
  IDC_EDITOR_ASKCLOSE,

  // End of symbol definition
  _DUMMY_ELEMENT_
};
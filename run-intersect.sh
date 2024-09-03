#!/bin/bash

find_qt_bin_windows() {
  local qt_dir="C:/Qt"
  if [ -d "$qt_dir" ]; then
    local qt_bin=$(find "$qt_dir" -type d -name "bin" -print -quit)
    if [ -n "$qt_bin" ]; then
      echo "$qt_bin"
    else
      echo "Error: Qt bin directory not found."
      exit 1
    fi
  else
    echo "Error: Qt directory not found at $qt_dir."
    exit 1
  fi
}

if [[ "$OSTYPE" == "msys" ]] || [[ "$OSTYPE" == "cygwin" ]] || [[ "$OSTYPE" == "win32" ]]; then
  QT_BIN_DIR=$(find_qt_bin_windows)
  export PATH="$QT_BIN_DIR:$PATH"
fi

BUILD_PROJECT_DIR=$(find build -type d -name "build-projects-ray-*-Release" -print -quit)

if [ -z "$BUILD_PROJECT_DIR" ]; then
  echo "Error: Build directory for the project not found."
  exit 1
fi

EXECUTABLE_PATH="$BUILD_PROJECT_DIR/projects_ray"
INI_FILE="template_inis/intersect/unit_cylinder.ini"

for INI_FILE in template_inis/intersect/*.ini; do
  if [ -x "$EXECUTABLE_PATH" ] || [ -f "$EXECUTABLE_PATH.exe" ]; then
    echo "Running $EXECUTABLE_PATH with $INI_FILE"
    if [ -x "$EXECUTABLE_PATH" ]; then
      "$EXECUTABLE_PATH" "$INI_FILE"
    elif [ -f "$EXECUTABLE_PATH.exe" ]; then
      "$EXECUTABLE_PATH.exe" "$INI_FILE"
    fi
  else
    echo "Error: Executable $EXECUTABLE_PATH not found or is not executable."
    exit 1
  fi
done

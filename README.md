# comfydwl 

my personal build of [dwl](https://codeberg.org/dwl/dwl), this page is just a condensed version of the official [dwl wiki](https://codeberg.org/dwl/dwl/src/branch/main/README.md)

## Screenshots

![Screenshots](https://codeberg.org/oceanicc/minidots/raw/branch/main/extras/screenshots/minidark-gtk.png)

![Screenshots](https://codeberg.org/oceanicc/minidots/raw/branch/main/extras/screenshots/floating.png)

## Dependencies

required -->
- libinput
- wayland
- wlroots (compiled with the libinput backend)
- xkbcommon
- wayland-protocols (compile-time only)
- pkg-config (compile-time only)

xwayland specific -->
- libxcb
- libxcb-wm
- wlroots (compiled with X11 support)
- Xwayland (runtime only)

*Note - if your distro has separate development packages install their ``-devel`` versions too*

## XDG_RUNTIME_DIR

Wayland requires a valid XDG_RUNTIME_DIR, which is usually set up by a session manager such as elogind or systemd-logind. If your system doesn't do this automatically, you will need to configure it prior to launching dwl, e.g.:
```shell
export XDG_RUNTIME_DIR=/tmp/xdg-runtime-$(id -u)
mkdir -p $XDG_RUNTIME_DIR
dwl
```

## Status information

Information about selected layouts, current window title, app-id, and selected/occupied/urgent tags is written to the stdin of the `-s` command (see the `STATUS INFORMATION` section in `_dwl_(1)`).  This information can be used to populate an external status bar with a script that parses the information. Failing to read this information will cause dwl to block, so if you do want to run a startup command that does not consume the status information, you can close standard input with the `<&-` shell redirection, for example:
`dwl -s 'foot --server <&-'`

If your startup command is a shell script, you can achieve the same inside the script with the line
`exec <&-`

#!/usr/bin/env bash

curl -LO http://ftp.us.debian.org/debian/pool/main/g/gtk4/libgtk-4-dev_4.12.0+ds-4_amd64.deb &&
sudo dpkg -i libgtk-4-dev_4.12.0+ds-4_amd64.deb

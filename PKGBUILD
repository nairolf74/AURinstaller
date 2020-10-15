# Maintainer: nairolf74
# Contributor: nairolf74
pkgname=AUR
pkgver=1.10.6
pkgrel=1
pkgdesc="AUR -> gestionnaire de paquets AUR"
arch=(any)
url=""
license=('GPL')
groups=()
provides=()
depends=('curl' 'pacman-contrib' 'gzip' 'tar')
optdepends=()
makedepends=()
conflicts=()
replaces=()
backup=()
install=
source=(https://github.com/nairolf74/AURinstaller/raw/main/src/$pkgname.tar.gz) 
md5sums=('SKIP')


build() {
  	cd $srcdir
}

package() {
cd $srcdir
mkdir -p $pkgdir/usr/bin
cp $pkgname $pkgdir/usr/bin/$pkgname
chmod +x $pkgdir/usr/bin
}

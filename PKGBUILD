# Maintainer: nairolf74
# Contributor: nairolf74
pkgname=AUR
pkgver=1.10.2
pkgrel=2
pkgdesc="AUR -> gestionnaire de paquets AUR"
arch=(any)
url=""
license=('GPL')
groups=()
provides=()
depends=('curl' 'pacman-contrib')
optdepends=()
makedepends=()
conflicts=()
replaces=()
backup=()
install=
source=($pkgname.tar.gz::https://github.com/nairolf74/AURinstaller.git) 
md5sums=('SKIP')



build() {
  cd $srcdir
}

package() {
cd $srcdir
mkdir -p $pkgdir/usr/bin
cp $pkgname.tar.gz $pkgdir/usr/bin/$pkgname
chmod +x $pkgdir/usr/bin
}

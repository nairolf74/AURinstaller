# Maintainer: Florian
# Contributor: Florian
pkgname=AUR
pkgver=1.10.2
pkgrel=0
pkgdesc="AUR -> gestionnaire de paquets AUR"
arch=(any)
url=""
license=('GPL')
groups=()
provides=()
depends=('curl')
optdepends=()
makedepends=()
conflicts=()
replaces=()
backup=()
install=
source=($pkgname.tar.gz::https://github.com/nairolf74/AURinstaller.git)
md5sums=('e3a6d6a40d0edb69138e33a971b27cc3')
 
build() {
  cd $srcdir
}

package() {
cd "$srcdir"
mkdir -p $pkgdir/usr/bin
cp $pkgname $pkgdir/usr/bin/$pkgname
chmod +x $pkgdir/usr/bin
}

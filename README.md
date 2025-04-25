# ModSync
A Qt-based Modpack Manager utilizing Modrinth as the mod provider and Gists for synchronization.

# Usage
## Setting up a Modpack
> [!Important] Ensure that all of the mods in your modpack are available on Modrinth.
> <br>Please use [Prism Launcher](https://prismlauncher.org), as it has the option to export a JSON list of mods. While other launchers also provide this feature, this guide is written for Prism Launcher.
><br>A [GitHub Account](https://github.com/signup) is reccomended in order to be able to upload Gists, though any site that allows viewing the raw contents of a file should work as well. This guide uses GitHub Gists.

1. Click on the instance you would like to use with ModSync and then click the "Edit" button.
2. Click the "Mods" tab, then click the "Export modlist" button at the bottom right, just above the close button.
3. Look for the format combo-box/dropdown, above the "Optional Info" label. Click on it and select "JSON."
4. Click the "Copy" button at the bottom left.
5. Go to [GitHub Gists](https://gist.github.com) and login if neccesary.
6. Paste the modlist into the code box, and give it a name. Including the `.json` file extension is optional.
7. Click the "Create secret gist" button (or create a public one if you'd like).
8. Click the "Raw" button on the right side of the box containing the name of your gist, and copy the url of the new page once it loads.
9. Now you can simply give your players this link, and they'll be able to put it in their copy of ModSync!
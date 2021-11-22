# @author liuyang
# @since 2020/9/6
# @update 2021/11/22 *.exe 改为 (*.exe, *.class)
# Remove-Item ./02/00/*.exe -Recurse -Force

$targetFolder = "."
$targetFiles = ("*.exe", "*.class")
$files = Get-ChildItem $targetFolder -Recurse -Include $targetFiles
# Write-Output $files

foreach ($file in $files) {
  Write-Output $file.FullName
  if ($file -is [System.IO.FileInfo]) {
    #Write-Output $file
    #Write-Output $file.FullName
    Remove-Item -Path $file.FullName -Force
  } 
}
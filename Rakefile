# create solution by url

require 'rake'
require 'uri'
require 'FileUtils'

task :solution do
  url = ENV["url"]
  uri = URI.parse(url)
  basename = File.basename(uri.path)

  # copy templates of test.cpp and solution.cpp
  FileUtils.cp("template", basename)

  # change directory
  Dir.chdir(basename)

  # create file link.url
  File.open("link.url", 'w') { |file| file.write(uri.path) }
end
